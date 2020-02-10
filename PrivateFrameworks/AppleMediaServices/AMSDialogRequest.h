//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class AMSDialogAction, AMSMetricsEvent, NSArray, NSDictionary, NSString, NSURL;

@interface AMSDialogRequest : NSObject <NSSecureCoding>
{
    NSArray *_buttonActions;
    AMSDialogAction *_defaultAction;
    NSURL *_iconBundleURL;
    NSString *_identifier;
    NSString *_logKey;
    NSString *_message;
    AMSMetricsEvent *_metricsEvent;
    long long _style;
    NSArray *_textFields;
    NSString *_title;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
+ (id)requestWithTitle:(id)arg1 message:(id)arg2;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSArray *textFields; // @synthesize textFields=_textFields;
@property long long style; // @synthesize style=_style;
@property(copy) AMSMetricsEvent *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSString *logKey; // @synthesize logKey=_logKey;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSURL *iconBundleURL; // @synthesize iconBundleURL=_iconBundleURL;
@property(retain) AMSDialogAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(copy) NSArray *buttonActions; // @synthesize buttonActions=_buttonActions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)locateActionWithIdentifier:(id)arg1;
- (void)addTextField:(id)arg1;
- (void)addButtonAction:(id)arg1;
- (id)description;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)init;

@end
