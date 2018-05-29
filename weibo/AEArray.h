//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class AEManagedValue, NSArray;

@interface AEArray : NSObject <NSFastEnumeration>
{
    CDUnknownBlockType _releaseBlock;
    AEManagedValue *_value;
    CDUnknownBlockType _mappingBlock;
}

@property(copy, nonatomic) CDUnknownBlockType mappingBlock; // @synthesize mappingBlock=_mappingBlock;
@property(retain, nonatomic) AEManagedValue *value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType releaseBlock; // @synthesize releaseBlock=_releaseBlock;
- (void).cxx_destruct;
- (void)releaseOldArray:(CDStruct_67a0e191 *)arg1;
- (void)updateWithContentsOfArray:(id)arg1 customMapping:(CDUnknownBlockType)arg2;
- (void)updateWithContentsOfArray:(id)arg1;
- (void)updatePointerValue:(void *)arg1 forObject:(id)arg2;
- (void *)pointerValueForObject:(id)arg1;
- (void *)pointerValueAtIndex:(int)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) int count; // @dynamic count;
@property(retain, nonatomic) NSArray *allValues; // @dynamic allValues;
- (void)dealloc;
- (id)initWithCustomMapping:(CDUnknownBlockType)arg1;
- (id)init;

@end

