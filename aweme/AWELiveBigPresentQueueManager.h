//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AWELiveLocalPresentModel, NSMutableArray, NSMutableDictionary;

@interface AWELiveBigPresentQueueManager : NSObject
{
    NSMutableArray *_presentArray;
    NSMutableDictionary *_presentDict;
    AWELiveLocalPresentModel *_animatingPresent;
}

@property(retain, nonatomic) AWELiveLocalPresentModel *animatingPresent; // @synthesize animatingPresent=_animatingPresent;
@property(retain, nonatomic) NSMutableDictionary *presentDict; // @synthesize presentDict=_presentDict;
@property(retain, nonatomic) NSMutableArray *presentArray; // @synthesize presentArray=_presentArray;
- (void).cxx_destruct;
- (long long)_indexForInsertedMyPresent;
- (void)clear;
- (void)dequeuePresent:(id)arg1;
- (void)enqueuePresent:(id)arg1;
- (id)topPresent;
- (id)init;

@end
