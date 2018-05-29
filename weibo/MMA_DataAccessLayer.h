//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WBTDFMDatabaseQueue;

@interface MMA_DataAccessLayer : NSObject
{
    WBTDFMDatabaseQueue *_currentDatabaseQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) WBTDFMDatabaseQueue *currentDatabaseQueue; // @synthesize currentDatabaseQueue=_currentDatabaseQueue;
- (void).cxx_destruct;
- (id)selectCacheWithHash:(id)arg1;
- (id)listAllCachedRequests;
- (void)handleRequest:(id)arg1 isFailed:(_Bool)arg2;
- (void)storeRequest:(id)arg1;
- (id)init;

@end

