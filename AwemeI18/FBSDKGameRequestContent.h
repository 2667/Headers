//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSDKCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface FBSDKGameRequestContent : NSObject <FBSDKCopying, NSSecureCoding>
{
    unsigned long long _actionType;
    NSString *_data;
    unsigned long long _filters;
    NSString *_message;
    NSString *_objectID;
    NSArray *_recipients;
    NSArray *_recipientSuggestions;
    NSString *_title;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *recipientSuggestions; // @synthesize recipientSuggestions=_recipientSuggestions;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToGameRequestContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *to;
@property(copy, nonatomic) NSArray *suggestions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

