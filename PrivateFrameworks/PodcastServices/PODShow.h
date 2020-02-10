//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PodcastServices/PODContentEntity.h>

#import "PODSecureCoding.h"
#import "PODShowProtocol.h"

@class NSDate, NSString, NSURL;

@interface PODShow : PODContentEntity <PODShowProtocol, PODSecureCoding>
{
    BOOL _isExplicit;
    BOOL _isSubscribed;
    NSString *_title;
    NSString *_author;
    NSString *_provider;
    NSString *_category;
    NSString *_descriptionOfShow;
    unsigned long long _storeCollectionId;
    NSDate *_addedDate;
    NSURL *_feedUrl;
    NSURL *_showPageUrl;
    id <PODShowSettingsProtocol> _settings;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) id <PODShowSettingsProtocol> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) NSURL *showPageUrl; // @synthesize showPageUrl=_showPageUrl;
@property(readonly, nonatomic) NSURL *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(readonly, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(readonly, nonatomic) BOOL isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, nonatomic) BOOL isExplicit; // @synthesize isExplicit=_isExplicit;
@property(readonly, nonatomic) unsigned long long storeCollectionId; // @synthesize storeCollectionId=_storeCollectionId;
@property(readonly, nonatomic) NSString *descriptionOfShow; // @synthesize descriptionOfShow=_descriptionOfShow;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initUsingPropertiesFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncID;

@end
