<script setup>
import { useNav } from '@slidev/client'

// 從 useNav() 中取出 currentPage, currentLayout 與頁面跳轉方法 go
const { currentPage, currentLayout, go } = useNav()

// 定義導向目錄頁的方法
const tocPage = () => {
  go('Outline') // 直接傳入投影片別名 (routeAlias)
}
</script>

<template>
    <div 
        v-if="currentPage == 1"
        class="fixed bottom-2 right-2 z-50 flex gap-2 items-center"
    >
      <span style="font-size: 1.8rem;" class="text-gray-300">下載簡報</span>    
      <a 
        href="https://raw.githubusercontent.com/anorak097/w2/main/%233%20MCU%20(%E2%85%A1)%20-%20Slidev.pdf"
        target="_blank"
        download
        class="inline-flex items-center justify-center p-2 rounded-full bg-gray-400 bg-opacity-10 hover:bg-opacity-20 border border-gray-500 border-opacity-20 backdrop-blur-md transition-all active:scale-90 !text-current"
        title="Download Slidev PDF"
      >
        <lucide:download class="text-xl opacity-60" />
      </a>
    </div>
</template>