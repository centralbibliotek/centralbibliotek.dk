module.exports = function (grunt) {
  'use strict';

  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
    compass: {
      dist: {
        options: {
          environment: 'production',
          config: 'config.rb'
        }
      }
    },

    shell: {
      options: {
        stderr: false
      },
      target: {
        command: 'drush advagg-fna'
      }
    },

    watch: {
      compass: {
        files: ['sass/**/*.scss'],
        tasks: ['compass', 'shell'],
      },

      css: {
        files: 'css/**/*.css',
        options: {
          livereload: true
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-shell');
  grunt.registerTask('default', ['compass', 'shell', 'watch']);
};
