//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@interface HeadlineSDKOperationQueue : NSOperationQueue
{
}

+ (id)concurrentQueueWithConcurrentCount:(long long)arg1 named:(id)arg2;
+ (id)concurrentQueueWithConcurrentCount:(long long)arg1;
+ (id)concurrentMaxOperationQueueNamed:(id)arg1;
+ (id)concurrentMaxOperationQueue;
+ (id)serialOperationQueueNamed:(id)arg1;
+ (id)serialOperationQueue;
+ (id)defaultQueueName;
- (void)addBlockOperationWithBlock:(CDUnknownBlockType)arg1;

@end

