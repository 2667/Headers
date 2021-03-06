//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBFaceModel : NSObject
{
    NSString *_iconName;
    long long _type;
    NSString *_className;
    struct CGPoint _center;
    struct CGRect _frame;
    struct CGAffineTransform _transform;
}

@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void)dealloc;
- (id)init;

@end

