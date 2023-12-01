import { Controller, Get, Res } from '@nestjs/common';
import { type Response } from 'express';
import { AvaliacaoService } from '../service/avaliacao.service';

@Controller('avaliacao')
export class AvaliacaoController {
  constructor(private readonly avaliacaoService: AvaliacaoService) {}

  @Get()
  getPage(@Res() response: Response) {
    return this.avaliacaoService.getPage(response);
  }
}
