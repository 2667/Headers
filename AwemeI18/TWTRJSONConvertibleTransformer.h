//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface TWTRJSONConvertibleTransformer : NSValueTransformer
{
    Class _targetClass;
}

+ (id)transformerWithTargetClass:(Class)arg1;
@property(retain, nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;
- (void).cxx_destruct;
- (id)transformedArray:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)initWithTargetClass:(Class)arg1;

@end

