//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLValueTransformer.h"

@interface MTLReversibleValueTransformer : MTLValueTransformer
{
}

+ (_Bool)allowsReverseTransformation;
- (id)reverseTransformedValue:(id)arg1 success:(_Bool *)arg2 error:(id *)arg3;
- (id)reverseTransformedValue:(id)arg1;
- (id)initWithForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;

@end

