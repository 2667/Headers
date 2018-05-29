//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseArticleEngine.h"

#import "ArticlePreloadEngineDelegate-Protocol.h"

@class SNHTTPRequestOperationWrapper;

@interface WBArticleEngine : WBBaseArticleEngine <ArticlePreloadEngineDelegate>
{
    SNHTTPRequestOperationWrapper *fetchRequestOperationWrapper;
    SNHTTPRequestOperationWrapper *loadExtendPropertyRequestOperationWrapper;
}

+ (void)applicationWillEnterForegroundWithArticlePreloadEngine:(id)arg1;
+ (void)articlePreloadEngine:(id)arg1 handlePreloadResponse:(id)arg2;
+ (id)articlePreloadEngine:(id)arg1 filterArticleIdsNeedToBeProload:(id)arg2;
- (void).cxx_destruct;
- (void)loadExtendPropertyOfArticleId:(id)arg1 withOptionalParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)loadArticleFromDbOfId:(id)arg1;
- (void)loadArticleOfId:(id)arg1 withOptionalParams:(id)arg2 fromDbFirst:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (void)dealloc;
- (id)indexOfArticleWithID:(id)arg1;
- (void)recordArticleReadProgress:(id)arg1 articleID:(id)arg2 offset:(double)arg3;

@end

