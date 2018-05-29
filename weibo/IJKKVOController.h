//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IJKKVOController : NSObject
{
    NSObject *_target;
    NSMutableArray *_observerArray;
}

- (void).cxx_destruct;
- (_Bool)removeEntryOfObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)safelyRemoveAllObservers;
- (void)safelyRemoveObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)safelyAddObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)initWithTarget:(id)arg1;

@end

