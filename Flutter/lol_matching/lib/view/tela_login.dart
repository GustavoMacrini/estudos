// ignore_for_file: override_on_non_overriding_member

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter/src/foundation/key.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:lol_matching/main.dart';

class TelaLogin extends StatefulWidget {
  const TelaLogin({Key? key}) : super(key: key);

  @override
  State<TelaLogin> createState() => _TelaLoginState();
}

class _TelaLoginState extends State<TelaLogin> {
  get varUsuario => null;


  @override
  void initState() {
    super.initState();
    SystemChrome.setPreferredOrientations([DeviceOrientation.landscapeLeft]);
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('LOL Matching'),
        backgroundColor: Colors.black,
      ),
      body: Container(
        alignment: Alignment.center,
        child: Row(children: [
// Login
          Column(
            children: [

              // =======================LOGIN==============================
              Text('Login'),
              Row(
                //mainAxisAlignment: MainAxisAlignment.start,
                children: [
                Text('usuário:'),
                Text('INPUT DE TEXTO')
              ],),

              Row(
                //mainAxisAlignment: MainAxisAlignment.start,
                children: [
                    Text('senha: '),
                    Text('INPUT DE TEXTO')
              ],),

              Row(                
                //mainAxisAlignment: MainAxisAlignment.end,
                children: [
                  Text('BOTAO'),                  
              ],),
              
              Text('Não possui conta?'),
              Text('Faça seu cadastro!'),

              // =======================CADASTRO==============================
              Text('Login'),
              Row(
                //mainAxisAlignment: MainAxisAlignment.start,
                children: [
                Text('usuário:'),
                Text('INPUT DE TEXTO')
              ],),

              Row(
                //mainAxisAlignment: MainAxisAlignment.start,
                children: [
                    Text('e-mail: '),
                    Text('INPUT DE TEXTO')
              ],),

              Row(                
                //mainAxisAlignment: MainAxisAlignment.end,
                children: [
                  Text('BOTAO'),                  
              ],),

            ],
          ),
// Texto
          Column(
            children: [
              Text('Texto LOL Matching')
            ],
          )
        ]),
      ),
    );
  }
}
