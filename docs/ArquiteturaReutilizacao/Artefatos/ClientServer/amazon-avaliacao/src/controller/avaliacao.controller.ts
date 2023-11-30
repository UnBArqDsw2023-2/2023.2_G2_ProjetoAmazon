import { Controller, Get } from '@nestjs/common';
import { AppService } from '../service/app.service';
import { AvaliacaoService } from '../service/avaliacao.service';

@Controller('avaliacao')
export class AvaliacaoController {
  constructor(private readonly avaliacaoService: AvaliacaoService) {}

  @Get()
  getPage() {
    return this.avaliacaoService.getPage();
  }
}
