<?php

namespace Drupal\campaignion_match_to_target_type;

use Drupal\campaignion_email_to_target\Channel\Email;
use Drupal\little_helpers\Webform\Submission;

/**
 * Channel that allows to compose an email but don’t send it.
 */
class ChannelEmailNoSend extends Email {

  /**
   * Don’t do anything when the form is submitted.
   */
  public function send() {
    return TRUE;
  }

  /**
   * Don’t filter targets and messages.
   */
  public function filterPairs(array $pairs, Submission $submission, bool $test_mode) {
    return $pairs;
  }

}
