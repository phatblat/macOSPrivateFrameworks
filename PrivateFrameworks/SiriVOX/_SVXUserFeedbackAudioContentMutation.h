//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXUserFeedbackAudioContentMutating.h"

@class NSString, NSURL, SVXUserFeedbackAudioContent;

@interface _SVXUserFeedbackAudioContentMutation : NSObject <SVXUserFeedbackAudioContentMutating>
{
    SVXUserFeedbackAudioContent *_baseModel;
    NSURL *_itemURL;
    unsigned long long _numberOfLoops;
    double _fadeInDuration;
    double _fadeOutDuration;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasItemURL:1;
        unsigned int hasNumberOfLoops:1;
        unsigned int hasFadeInDuration:1;
        unsigned int hasFadeOutDuration:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setFadeOutDuration:(double)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setNumberOfLoops:(unsigned long long)arg1;
- (void)setItemURL:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
