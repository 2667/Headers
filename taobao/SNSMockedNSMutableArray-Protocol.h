//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexSet;

@protocol SNSMockedNSMutableArray <NSObject>
+ (id)array;

@optional
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (NSArray *)sortedArrayUsingComparator:(long long (^)(id, id))arg1;
- (void)removeObjectsInArray:(NSArray *)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObjects:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)addObjectsFromArray:(NSArray *)arg1;
- (void)addObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
@end
