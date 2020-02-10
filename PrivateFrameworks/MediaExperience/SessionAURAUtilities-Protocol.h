//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SessionAURAUtilities <NSObject>
- (struct error_code)registerIOProc:(unsigned int)arg1 iocType:(unsigned char)arg2 ioProc:(const struct function<void (unsigned int, const AMCP::Proc_Cycle_Info &, unsigned long, AMCP::Proc_Stream *, unsigned long, AMCP::Proc_Stream *)> *)arg3;
- (vector_c6bb1d04)virtualPortsForSession:(unsigned int)arg1;
- (vector_85eef765)ioControllersForSession:(unsigned int)arg1;
- (expected_cf04bbb0)simulateMicrophoneConfiguration:(const CDStruct_b957a072 *)arg1 virtualPort:(id <aura_VirtualPort>)arg2;
- (expected_01e6cd2c)simulatePortEligibility:(const CDStruct_b957a072 *)arg1;
- (expected_73a2de47)simulateConfiguration:(const CDStruct_b957a072 *)arg1;
- (struct error_code)deactivateVictimSessions:(vector_017a7f34)arg1 completionHandler:(void (^)(struct expected<aura::ConfigurationChangeDescription, std::__1::error_code>))arg2;
- (struct error_code)applyConfiguration:(const CDStruct_b957a072 *)arg1 activate:(_Bool)arg2 completionHandler:(void (^)(struct expected<aura::ConfigurationChangeDescription, std::__1::error_code>))arg3;
- (struct error_code)registerAudioStatisticsReporter:(unsigned int)arg1 reporterID:(long long)arg2;
- (struct error_code)unregisterSession:(unsigned int)arg1;
- (struct error_code)registerSession:(unsigned int)arg1;
@end
