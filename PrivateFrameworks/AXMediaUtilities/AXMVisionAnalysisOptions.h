//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class AXMLanguage, NSArray, NSSet;

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding>
{
    BOOL _detectText;
    BOOL _detectFaces;
    BOOL _detectScenes;
    BOOL _detectModelClassifications;
    BOOL _detectTraits;
    BOOL _detectRectangles;
    BOOL _detectHumans;
    BOOL _detectHorizon;
    BOOL _correctSpelling;
    BOOL _includeImageInResult;
    long long _clientID;
    AXMLanguage *_textDetectionLanguage;
    NSSet *_spellCheckingLanguages;
    NSArray *_ignoredLayerContextIDs;
}

+ (BOOL)supportsSecureCoding;
+ (id)voiceOverOptions;
+ (id)defaultOptions;
@property(retain, nonatomic) NSArray *ignoredLayerContextIDs; // @synthesize ignoredLayerContextIDs=_ignoredLayerContextIDs;
@property(nonatomic) BOOL includeImageInResult; // @synthesize includeImageInResult=_includeImageInResult;
@property(retain, nonatomic) NSSet *spellCheckingLanguages; // @synthesize spellCheckingLanguages=_spellCheckingLanguages;
@property(retain, nonatomic) AXMLanguage *textDetectionLanguage; // @synthesize textDetectionLanguage=_textDetectionLanguage;
@property(nonatomic) BOOL correctSpelling; // @synthesize correctSpelling=_correctSpelling;
@property(nonatomic) BOOL detectHorizon; // @synthesize detectHorizon=_detectHorizon;
@property(nonatomic) BOOL detectHumans; // @synthesize detectHumans=_detectHumans;
@property(nonatomic) BOOL detectRectangles; // @synthesize detectRectangles=_detectRectangles;
@property(nonatomic) BOOL detectTraits; // @synthesize detectTraits=_detectTraits;
@property(nonatomic) BOOL detectModelClassifications; // @synthesize detectModelClassifications=_detectModelClassifications;
@property(nonatomic) BOOL detectScenes; // @synthesize detectScenes=_detectScenes;
@property(nonatomic) BOOL detectFaces; // @synthesize detectFaces=_detectFaces;
@property(nonatomic) BOOL detectText; // @synthesize detectText=_detectText;
@property(nonatomic) long long clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

