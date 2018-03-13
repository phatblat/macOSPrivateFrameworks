//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@interface SGNamedEntityDissector : SGPipelineDissector
{
    struct _opaque_pthread_mutex_t _lock;
    void *_nlpTagger;
    BOOL _significanceCheckEnabled;
    int _linguisticDataNotificationToken;
}

- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 source:(id)arg3 cloudSync:(BOOL)arg4 algorithms:(id)arg5;
- (id)_entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 dataDetections:(id)arg3 source:(id)arg4 cloudSync:(BOOL)arg5 algorithms:(id)arg6;
- (BOOL)_isSignificantMessage:(id)arg1 store:(id)arg2;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;
- (id)initWithSignificanceCheckEnabled:(BOOL)arg1;

@end

