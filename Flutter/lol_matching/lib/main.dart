import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:lol_matching/view/tela_login.dart';

void main() {
  runApp(
    MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'LOL Matching',
      initialRoute: 't1',
      routes: {
        't1' :(context) => TelaLogin()
        
      },
    )
  );
}