<link rel="stylesheet" href="editormd/css/editormd.css" />
<div id="test-editor">
    <textarea style="display:none;">
      ```c
void calcularFatorial() {
    int numero,resultado;
    resultado = numero = 0;
    printf("Digite um numero: \n");
    printf("--> ");
    scanf("%d",&numero);
    for(resultado = 1; numero > 1; numero-=1)
        resultado *= numero;
    color(BHYEL);
    printf("Resultado: %i \n",resultado);
}
```      
    </textarea>
</div>
<script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
<script src="editormd/editormd.min.js"></script>
<script type="text/javascript">
    $(function() {
        var editor = editormd("test-editor", {
            // width  : "100%",
            // height : "100%",
            path   : "editormd/lib/"
        });
    });
</script>
