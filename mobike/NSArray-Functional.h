//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (Functional)
- (id)firstObjectWithCondition:(CDUnknownBlockType)arg1;
- (_Bool)reduceBool:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (double)reduceFloat:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)reduceInteger:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)reduce:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (void)forEach:(CDUnknownBlockType)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)map:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *enumerated;
@end

