//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IPAAutoSettings.h"

@interface PASmartBlackAndWhiteAutoSettings : IPAAutoSettings
{
    double _inputBlackAndWhite;
    double _offsetStrength;
    double _offsetNeutralGamma;
    double _offsetTone;
}

@property(nonatomic) double offsetTone; // @synthesize offsetTone=_offsetTone;
@property(nonatomic) double offsetNeutralGamma; // @synthesize offsetNeutralGamma=_offsetNeutralGamma;
@property(nonatomic) double offsetStrength; // @synthesize offsetStrength=_offsetStrength;
@property(nonatomic) double inputBlackAndWhite; // @synthesize inputBlackAndWhite=_inputBlackAndWhite;
- (BOOL)_applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;

@end

