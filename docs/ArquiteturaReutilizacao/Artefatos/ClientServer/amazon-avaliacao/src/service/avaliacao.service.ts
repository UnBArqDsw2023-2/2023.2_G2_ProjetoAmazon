import { Injectable } from '@nestjs/common';

@Injectable()
export class AvaliacaoService {
  getPage(): any {
    return `
    <!DOCTYPE html>
    <html>
        <head>
            <title>Amazon.com</title>
            <meta charset="utf-8"/>
            <h1> Avaliação de Produtos :) </h1>
        </head>
        <body>
            <button type="button" onclick="window.location.href='/'";>Homepage</button>
            <br><br><br>
            <button type="button" onclick="window.location.href='/pontos'";>Troca de Pontos</button>
            <br><br><br>
            Lorem ipsum dolor sit amet, consectetur adipiscing elit. In at tempor mauris. Nullam id lectus sed ex dapibus mattis. Morbi ac ultricies est. Vestibulum quis metus pulvinar quam blandit pretium. Cras sit amet ornare tellus. Duis pharetra tortor sit amet ligula iaculis, malesuada volutpat tellus egestas. Phasellus purus dolor, ullamcorper et pretium vel, rhoncus id velit. Mauris mollis justo sit amet enim porta, sit amet varius dolor ultricies. Aliquam lacus felis, tempus ut elit quis, euismod feugiat dui. Sed ultrices feugiat enim et efficitur. Proin tincidunt porta scelerisque. Duis vel lacus fermentum, facilisis eros a, placerat nisl. Nulla condimentum non elit eget tempus.
            <br><br><br>
            Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Phasellus semper commodo nisl, vitae tristique leo sodales vitae. Fusce porttitor, eros efficitur sodales ultricies, neque ipsum consequat diam, nec luctus orci justo pulvinar metus. Nulla id augue at elit sodales elementum ac laoreet dui. Etiam quis facilisis felis. Nulla facilisi. Nam sollicitudin turpis ut mauris rutrum, a tincidunt est scelerisque. Interdum et malesuada fames ac ante ipsum primis in faucibus.
            <br><br><br>
            Mauris quis laoreet eros. Nullam quis ante vel diam eleifend varius ullamcorper vel ante. Ut vel eleifend ex. Etiam convallis velit augue, eget semper neque scelerisque in. Etiam scelerisque condimentum blandit. Cras viverra finibus tortor id posuere. Vestibulum vulputate ipsum vel arcu auctor molestie. Cras sodales accumsan turpis, ut dapibus mi pretium sed. Sed luctus leo nunc, et imperdiet neque efficitur non. Sed congue varius nibh sit amet pretium. Interdum et malesuada fames ac ante ipsum primis in faucibus.
            <br><br><br>
            In rutrum felis ac consectetur ornare. Integer rutrum neque id quam suscipit, nec fermentum sem vehicula. Sed finibus tortor nec orci lobortis, in fermentum ipsum aliquet. Sed auctor velit eu lorem accumsan, eget tempus felis congue. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nam sodales odio et odio mattis, non aliquam dolor pellentesque. Quisque sodales euismod libero consectetur tincidunt. Aliquam erat volutpat. Mauris efficitur id nibh in sagittis. Vivamus vitae libero nisl. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed scelerisque rhoncus sapien sit amet molestie.
            <br><br><br>
            Phasellus tortor libero, suscipit vitae risus aliquet, ultrices rhoncus erat. Etiam viverra mollis tincidunt. Aenean facilisis, velit ac tincidunt gravida, est erat fringilla dolor, a egestas massa nisl in quam. Vestibulum tempor mauris ut rutrum euismod. Aenean non gravida enim, a faucibus elit. Ut at sem maximus, semper mauris sollicitudin, pretium ex. Nullam malesuada malesuada leo a euismod. Fusce a hendrerit leo. Cras auctor condimentum elit, eu porttitor urna vestibulum eu. Vestibulum bibendum lorem quis ultricies volutpat. Quisque quis elit in ante condimentum dictum. Phasellus dapibus placerat nisl nec commodo. Morbi justo risus, aliquam ac porta et, gravida in sem. Integer ullamcorper tincidunt facilisis. Mauris egestas augue et felis egestas bibendum. Integer vitae nulla quis sem sollicitudin vulputate.
        </body>
    </html>
    `
  }
}
