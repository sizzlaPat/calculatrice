pipeline {
    agent any
    stages {
        stage('Build') {
            // les étapes pour la phase de build
            steps {
               sh 'make build'
            }
            
        }
        stage('Test') {
            // les étapes pour la phase de test
            steps {
               sh 'make test'
            } 
        }
        stage('Deploy') {
            // les étapes pour la phase de déploiement
             steps {
               sh 'make deploy'
            } 
        }
    }
}