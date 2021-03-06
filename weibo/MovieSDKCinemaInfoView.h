//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MovieSDKCinema, MovieSDKKeywordLabel, NSString, UILabel;

@interface MovieSDKCinemaInfoView : UIView
{
    MovieSDKCinema *_data;
    NSString *_keyword;
    MovieSDKKeywordLabel *_nameLabel;
    UILabel *_priceLabel;
    MovieSDKKeywordLabel *_addressLabel;
    UILabel *_distanceLabel;
}

@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) MovieSDKKeywordLabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MovieSDKKeywordLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) MovieSDKCinema *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)revealPrice:(_Bool)arg1;
- (void)layoutSubviews;
- (id)init;

@end

