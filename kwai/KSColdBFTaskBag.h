//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSColdBFTaskBag : NSObject
{
    CDUnknownBlockType _creator;
}

+ (id)coldTaskWithCreator:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType creator; // @synthesize creator=_creator;
- (void).cxx_destruct;
- (id)createHotTask;
- (id)initWithCreator:(CDUnknownBlockType)arg1;
- (id)_retryWithRetryLeft:(long long)arg1 executor:(id)arg2 shouldRetry:(CDUnknownBlockType)arg3 interval:(double)arg4 cancelationToken:(id)arg5;
- (id)retriableTaskWithConfiguration:(id)arg1 executor:(id)arg2 cancelationToken:(id)arg3;

@end
