//
//  RetailBankingRewardsRedemption.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingRewardsRedemption
 @abstract RetailBankingRewardsRedemption class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class RetailBankingRewardsRedemption
 @abstract Generated model object: RetailBankingRewardsRedemption.
 @discussion Use @link //apple_ref/occ/cat/RetailBankingRewardsRedemption(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/RetailBankingRewardsRedemption/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface RetailBankingRewardsRedemption : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a RetailBankingRewardsRedemption.
 @result Class representing the data source associated with a RetailBankingRewardsRedemption.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSNumber * id;

/*!
 @var pointsAvailable
 @abstract Generated model property: points_available.
 */
@property (nonatomic, strong) NSNumber * pointsAvailable;

/*!
 @var redemptionDetails
 @abstract Generated model property: redemption_details.
 */
@property (nonatomic, strong) NSArray * redemptionDetails;

@end
