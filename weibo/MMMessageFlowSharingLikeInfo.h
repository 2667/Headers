//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString;

@interface MMMessageFlowSharingLikeInfo : WBModelObject
{
    NSString *_object_id;
    NSString *_type;
    unsigned long long _status;
    NSDictionary *_ext_param;
}

@property(retain, nonatomic) NSDictionary *ext_param; // @synthesize ext_param=_ext_param;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *object_id; // @synthesize object_id=_object_id;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

