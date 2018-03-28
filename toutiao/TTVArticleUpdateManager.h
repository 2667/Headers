//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTVArticleUpdateManager : NSObject
{
    NSMutableDictionary *_updateCommandQueue;
    NSMutableDictionary *_updateOperationQueue;
}

+ (id)defaultArticleDetailURLHosts;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *updateOperationQueue; // @synthesize updateOperationQueue=_updateOperationQueue;
@property(retain, nonatomic) NSMutableDictionary *updateCommandQueue; // @synthesize updateCommandQueue=_updateCommandQueue;
- (void).cxx_destruct;
- (id)latestArticleURLString:(id)arg1 atCDNIndex:(unsigned long long)arg2;
- (id)articleCDNPathWithPrefix:(id)arg1 groupID:(id)arg2 itemID:(id)arg3 aggrType:(long long)arg4 commandID:(id)arg5;
- (id)detailCDNAPIVersionString;
- (id)articleDetailURLHostsIsFull:(_Bool)arg1;
- (id)taskWithUrl:(id)arg1 atCDNIndex:(unsigned long long)arg2 article:(id)arg3;
- (void)fetchLatestArticleFull:(id)arg1 atCDNIndex:(unsigned long long)arg2 processedError:(id)arg3;
- (void)addUpdateCommand:(id)arg1 groupModels:(id)arg2;
- (id)init;

@end
