//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LFHomeCardTransfer : NSObject
{
}

+ (_Bool)isRichTextForArticles:(id)arg1;
+ (_Bool)isRichText:(id)arg1;
+ (void)resetCssDic:(id)arg1 tag:(id)arg2 string:(id)arg3;
+ (id)recallMessageId:(id)arg1;
+ (void)updateNewViewInfo:(id)arg1 viewInfo:(id)arg2;
+ (void)updateViewInfo:(id)arg1 viewInfo:(id)arg2;
+ (void)replaceCard:(id)arg1 withPraiseCount:(long long)arg2 replyCount:(long long)arg3 hasPraised:(_Bool)arg4 messageAction:(id)arg5 needUpdateViewInfo:(_Bool)arg6;
+ (void)replaceCard:(id)arg1 withAction:(id)arg2;
+ (void)replaceCard:(id)arg1 withPublicInfo:(id)arg2;
+ (void)replaceCardList:(id)arg1 withPublicInfo:(id)arg2;
+ (id)cardsFromLFHomeCardModels:(id)arg1;
+ (id)extDic:(id)arg1;
+ (void)dictTraversal:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cardFromLFHomeCardModel:(id)arg1;
+ (id)actions:(id)arg1 templateCode:(unsigned long long)arg2 actionId:(id)arg3 action:(id)arg4 publicBizType:(id)arg5;
+ (id)gotoDetail:(id)arg1 actionName:(id)arg2;
+ (id)comment:(id)arg1 actionId:(id)arg2 action:(id)arg3 publicBizType:(id)arg4;
+ (id)praise:(id)arg1 actionId:(id)arg2 publicBizType:(id)arg3;
+ (_Bool)setTemplateDataArticle:(id)arg1 ToDataDic:(id)arg2 templateCode:(unsigned long long)arg3 publicBizType:(id)arg4 contents:(id)arg5 cssDic:(id)arg6;
+ (id)setTemplateData:(id)arg1 mType:(id)arg2 templateCode:(unsigned long long)arg3 ToCardTemplateDataDic:(id)arg4 publicBizType:(id)arg5 contents:(id)arg6 cssDic:(id)arg7;
+ (id)topBar:(id)arg1 syncReceivedTime:(long long)arg2;
+ (id)infoArea:(id)arg1;
+ (id)convertPubChatMessageToLFHomeCard:(id)arg1;
+ (id)cardTemplateData:(id)arg1 mType:(id)arg2 templateCode:(unsigned long long)arg3 syncReceivedTime:(long long)arg4 actionId:(id)arg5 publicBizType:(id)arg6 bizLogMonitor:(id)arg7;
+ (id)getCardWithSyncData:(id)arg1 syncReceivedTime:(long long)arg2;
+ (id)getCardList:(id)arg1 publicId:(id)arg2 isSync:(_Bool)arg3 isHisPull:(_Bool)arg4;

@end

