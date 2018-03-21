//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface KikMessage : NSObject
{
    _Bool _forwardable;
    int _type;
    NSString *_imageURL;
    NSString *_previewURL;
    NSString *_text;
    NSString *_title;
    NSMutableArray *_URLs;
    NSString *_appName;
    NSString *_appPackage;
    NSString *_iconURL;
}

+ (id)photoMessageWithImage:(id)arg1;
+ (id)photoMessageWithImageURL:(id)arg1 previewURL:(id)arg2;
+ (id)articleMessageWithTitle:(id)arg1 text:(id)arg2 contentURL:(id)arg3 previewURL:(id)arg4;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *appPackage; // @synthesize appPackage=_appPackage;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool forwardable; // @synthesize forwardable=_forwardable;
@property(readonly, nonatomic) NSMutableArray *URLs; // @synthesize URLs=_URLs;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSString *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)linkRepresentation;
- (id)initWithImage:(id)arg1;
- (id)initWithImageURL:(id)arg1 previewURL:(id)arg2;
- (id)initWithTitle:(id)arg1 text:(id)arg2 contentURL:(id)arg3 previewURL:(id)arg4;
- (void)addFallbackURL:(id)arg1 forPlatform:(int)arg2;

@end
