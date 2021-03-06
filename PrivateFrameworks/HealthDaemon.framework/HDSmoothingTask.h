/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSmoothingTask : NSObject {
    HKLocationSeriesSample * _sample;
    NSArray * _unsmoothedLocations;
}

@property (nonatomic, retain) HKLocationSeriesSample *sample;
@property (nonatomic, retain) NSArray *unsmoothedLocations;

- (void).cxx_destruct;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)sample;
- (void)setSample:(id)arg1;
- (void)setUnsmoothedLocations:(id)arg1;
- (id)unsmoothedLocations;

@end
