//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface PKDynamicProvisioningPageLearnMoreContent : NSObject <NSCopying>
{
    NSString *_buttonTitle;
    NSURL *_buttonURL;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    NSString *_bussinessChatButtonTitle;
    NSString *_bussinesChatIntentName;
}

@property(copy, nonatomic) NSString *bussinesChatIntentName; // @synthesize bussinesChatIntentName=_bussinesChatIntentName;
@property(copy, nonatomic) NSString *bussinessChatButtonTitle; // @synthesize bussinessChatButtonTitle=_bussinessChatButtonTitle;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *buttonURL; // @synthesize buttonURL=_buttonURL;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictonary:(id)arg1;

@end
