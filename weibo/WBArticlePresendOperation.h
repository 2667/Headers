//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBQueueOperation.h"

#import "WBQueueArticleDelegate-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_semaphore, WBQueueArticle;

@interface WBArticlePresendOperation : WBQueueOperation <WBQueueArticleDelegate>
{
    NSObject<OS_dispatch_semaphore> *semaphore;
    id <WBQueueArticle> _article;
}

+ (_Bool)logEnabled;
@property(readonly, nonatomic) id <WBQueueArticle> article; // @synthesize article=_article;
- (void).cxx_destruct;
- (void)doCompletion;
- (void)appendArticleDetailLog;
- (void)articleDidFailedPreSend:(id)arg1 withError:(id)arg2;
- (void)articleDidFinishPreSend:(id)arg1;
- (void)executeRequestWithBlock:(CDUnknownBlockType)arg1;
- (id)operationTypeString;
- (id)initWithJob:(id)arg1 article:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

