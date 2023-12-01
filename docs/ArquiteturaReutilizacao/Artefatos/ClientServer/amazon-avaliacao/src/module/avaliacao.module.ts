import { Module } from '@nestjs/common';
import { AvaliacaoController } from '../controller/avaliacao.controller';
import { AvaliacaoService } from '../service/avaliacao.service';

@Module({
  imports: [],
  controllers: [AvaliacaoController],
  providers: [AvaliacaoService],
})
export class AvaliacaoModule {}
