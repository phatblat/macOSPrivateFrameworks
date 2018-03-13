//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (SocialUIAdditions)
- (BOOL)_audioPowerLevels:(double *)arg1 powerLevelsCount:(unsigned long long)arg2;
- (id)_waveformWithPowerLevels:(double *)arg1 powerLevelsCount:(unsigned long long)arg2 is2x:(BOOL)arg3;
- (unsigned long long)_waveformPowerLevelsCountForDuration:(double)arg1;
- (id)renderedWaveFormForAudioFile:(BOOL)arg1;
- (id)inputLinePreviewForAudioMessage;
- (id)formattedNameFromVCFURL;
- (id)iconPreview;
- (id)newFileTransferPreview;
- (id)newAudioMessagePreview:(BOOL)arg1;
- (id)newMoviePreview;
@end

