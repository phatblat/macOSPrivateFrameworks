//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSpIdVTTextDependentSpeakerRecognizer, NSError;

@protocol CSSpIdVTTextDependentSpeakerRecognizerDelegate <NSObject>
- (void)textDependentSpeakerRecognizer:(CSSpIdVTTextDependentSpeakerRecognizer *)arg1 failedWithError:(NSError *)arg2;
- (void)textDependentSpeakerRecognizer:(CSSpIdVTTextDependentSpeakerRecognizer *)arg1 hasSatScore:(float)arg2;
@end
