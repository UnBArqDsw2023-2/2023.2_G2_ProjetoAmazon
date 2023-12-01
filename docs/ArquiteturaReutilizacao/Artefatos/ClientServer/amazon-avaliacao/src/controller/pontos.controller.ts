import { Controller, Get, Res } from '@nestjs/common';
import { PontosService } from '../service/pontos.service';
import { type Response } from 'express';

@Controller('pontos')
export class PontosController {
  constructor(private readonly pontosService: PontosService) {}

  @Get()
  getPage(@Res() response: Response) {
    return this.pontosService.getPage(response);
  }
}
