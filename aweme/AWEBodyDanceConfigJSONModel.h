//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEBodyDanceConfigJSONEffectModel, NSString;

@interface AWEBodyDanceConfigJSONModel : MTLModel <MTLJSONSerializing>
{
    AWEBodyDanceConfigJSONEffectModel *_effect;
    NSString *_name;
    NSString *_version;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) AWEBodyDanceConfigJSONEffectModel *effect; // @synthesize effect=_effect;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

