//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBRunVoiceCommandIntentResponse.h"

@class NSString, _INPBArchivedObject, _INPBDictionary;

@interface _INPBRunVoiceCommandIntentResponse : PBCodable <_INPBRunVoiceCommandIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int continueRunning:1;
        unsigned int customResponsesDisabled:1;
        unsigned int intentCategory:1;
        unsigned int interstitialDisabled:1;
        unsigned int toggleState:1;
    } _has;
    BOOL _continueRunning;
    BOOL _customResponsesDisabled;
    BOOL _interstitialDisabled;
    int _intentCategory;
    int _toggleState;
    NSString *_appBundleId;
    NSString *_localizedAppName;
    _INPBDictionary *_parameters;
    NSString *_responseTemplate;
    _INPBArchivedObject *_underlyingIntent;
    _INPBArchivedObject *_underlyingIntentResponse;
    NSString *_underlyingIntentTitle;
    NSString *_verb;
}

@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(copy, nonatomic) NSString *underlyingIntentTitle; // @synthesize underlyingIntentTitle=_underlyingIntentTitle;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse; // @synthesize underlyingIntentResponse=_underlyingIntentResponse;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntent; // @synthesize underlyingIntent=_underlyingIntent;
@property(nonatomic) int toggleState; // @synthesize toggleState=_toggleState;
@property(copy, nonatomic) NSString *responseTemplate; // @synthesize responseTemplate=_responseTemplate;
@property(retain, nonatomic) _INPBDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *localizedAppName; // @synthesize localizedAppName=_localizedAppName;
@property(nonatomic) BOOL interstitialDisabled; // @synthesize interstitialDisabled=_interstitialDisabled;
@property(nonatomic) int intentCategory; // @synthesize intentCategory=_intentCategory;
@property(nonatomic) BOOL customResponsesDisabled; // @synthesize customResponsesDisabled=_customResponsesDisabled;
@property(nonatomic) BOOL continueRunning; // @synthesize continueRunning=_continueRunning;
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasVerb;
@property(readonly, nonatomic) BOOL hasUnderlyingIntentTitle;
@property(readonly, nonatomic) BOOL hasUnderlyingIntentResponse;
@property(readonly, nonatomic) BOOL hasUnderlyingIntent;
- (int)StringAsToggleState:(id)arg1;
- (id)toggleStateAsString:(int)arg1;
@property(nonatomic) BOOL hasToggleState;
@property(readonly, nonatomic) BOOL hasResponseTemplate;
@property(readonly, nonatomic) BOOL hasParameters;
@property(readonly, nonatomic) BOOL hasLocalizedAppName;
@property(nonatomic) BOOL hasInterstitialDisabled;
- (int)StringAsIntentCategory:(id)arg1;
- (id)intentCategoryAsString:(int)arg1;
@property(nonatomic) BOOL hasIntentCategory;
@property(nonatomic) BOOL hasCustomResponsesDisabled;
@property(nonatomic) BOOL hasContinueRunning;
@property(readonly, nonatomic) BOOL hasAppBundleId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

