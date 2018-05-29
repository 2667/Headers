//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface TSEUIScribeEvent : NSObject
{
    NSNumber *_userID;
    NSString *_element;
    NSString *_action;
    NSDictionary *_parameters;
}

@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *element; // @synthesize element=_element;
@property(readonly, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUser:(id)arg1 element:(id)arg2 action:(id)arg3;

@end

