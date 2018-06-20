//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;
    CoreDAVItemWithNoChildren *_validSyncToken;
    CoreDAVItemWithNoChildren *_noUIDConflict;
    CoreDAVItemWithNoChildren *_validAddressData;
    CoreDAVItemWithNoChildren *_maxResourceSize;
    CoreDAVItemWithNoChildren *_uid;
    CoreDAVItemWithNoChildren *_ctagOkay;
    CoreDAVItemWithNoChildren *_maxImageSize;
    CoreDAVItemWithNoChildren *_invalidImageType;
    CoreDAVItemWithNoChildren *_imageError;
    CoreDAVItemWithNoChildren *_maxAttendees;
    CoreDAVItemWithNoChildren *_quotaExceeded;
    CoreDAVItemWithNoChildren *_maxResources;
    CoreDAVItemWithNoChildren *_validTimezone;
    CoreDAVItemWithNoChildren *_validSplit;
    CoreDAVLeafItem *_status;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVLeafItem *status; // @synthesize status=_status;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *validSplit; // @synthesize validSplit=_validSplit;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *validTimezone; // @synthesize validTimezone=_validTimezone;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *maxResources; // @synthesize maxResources=_maxResources;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *quotaExceeded; // @synthesize quotaExceeded=_quotaExceeded;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *maxAttendees; // @synthesize maxAttendees=_maxAttendees;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *imageError; // @synthesize imageError=_imageError;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *invalidImageType; // @synthesize invalidImageType=_invalidImageType;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *ctagOkay; // @synthesize ctagOkay=_ctagOkay;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *maxResourceSize; // @synthesize maxResourceSize=_maxResourceSize;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *validAddressData; // @synthesize validAddressData=_validAddressData;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *noUIDConflict; // @synthesize noUIDConflict=_noUIDConflict;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *validSyncToken; // @synthesize validSyncToken=_validSyncToken;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits; // @synthesize numberOfMatchesWithinLimits=_numberOfMatchesWithinLimits;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

