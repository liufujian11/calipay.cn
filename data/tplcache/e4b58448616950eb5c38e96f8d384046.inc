<h2>{dede:field name='typename'/}</h2>
        {dede:arclist row='1' flag='h' orderby='rand' }
        <h4 class="title-18 pr-0">
            <a href="[field:arcurl/]">[field:title/]</a>
        </h4>
        <div class="postbox__text-meta pb-10">
            <span>[field:pubdate function="('Y年m月d日',@me)"/]</span>
        </div>
        {/dede:arclist}