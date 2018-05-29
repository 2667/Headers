//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TWTRJSONValidator : NSObject
{
    NSDictionary *_transformers;
    NSDictionary *_outputValues;
}

@property(readonly, copy, nonatomic) NSDictionary *outputValues; // @synthesize outputValues=_outputValues;
@property(readonly, copy, nonatomic) NSDictionary *transformers; // @synthesize transformers=_transformers;
- (void).cxx_destruct;
- (id)pruneDictionary:(id)arg1;
- (_Bool)allRequiredKeysPresent:(id)arg1;
- (_Bool)key:(id)arg1 isValidForClass:(Class)arg2 inDictionary:(id)arg3;
- (void)transformDictionary:(id)arg1;
- (id)validatedDictionaryFromJSON:(id)arg1;
- (id)initWithValueTransformers:(id)arg1 outputValues:(id)arg2;

@end

