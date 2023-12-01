import { Module } from '@nestjs/common';
import { AppController } from '../controller/app.controller';
import { AppService } from '../service/app.service';
import { AvaliacaoModule } from './avaliacao.module';
import { PontosModule } from './pontos.module';

@Module({
  imports: [AvaliacaoModule, PontosModule],
  controllers: [AppController],
  providers: [AppService],
})
export class AppModule {}
