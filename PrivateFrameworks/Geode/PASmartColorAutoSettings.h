//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IPAAutoSettings.h"

@interface PASmartColorAutoSettings : IPAAutoSettings
{
    double _p75;
    double _p98;
    double _autoValue;
    double _g98;
}

@property(nonatomic) double g98; // @synthesize g98=_g98;
@property(nonatomic) double autoValue; // @synthesize autoValue=_autoValue;
@property(nonatomic) double p98; // @synthesize p98=_p98;
@property(nonatomic) double p75; // @synthesize p75=_p75;
- (BOOL)_applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;
- (id)init;

@end

