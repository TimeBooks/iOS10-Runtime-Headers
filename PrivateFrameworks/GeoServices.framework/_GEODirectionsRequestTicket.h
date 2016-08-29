/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket> {
    bool  _active;
    bool  _canceled;
    bool  _isReroute;
    GEOComposedRoute * _originalRoute;
    GEODirectionsRequest * _request;
    NSDictionary * _userInfo;
    NSArray * _waypoints;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isReroute;
@property (nonatomic, retain) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) GEODirectionsRequest *request;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *waypoints;

- (bool)active;
- (void)cancel;
- (bool)canceled;
- (void)dealloc;
- (id)description;
- (id)initWithRequest:(id)arg1;
- (bool)isReroute;
- (id)originalRoute;
- (id)request;
- (id)responseUserInfo;
- (void)setIsReroute:(bool)arg1;
- (void)setOriginalRoute:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (id)waypoints;

@end