//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSMutableArray;

@interface JSONModelArray : NSObject <NSFastEnumeration>
{
    NSMutableArray *_storage;
    Class _targetClass;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)mutableCopy;
- (id)modelWithIndexValue:(id)arg1;
- (unsigned long long)count;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)lastObject;
- (id)firstObject;
- (id)initWithArray:(id)arg1 modelClass:(Class)arg2;

@end

